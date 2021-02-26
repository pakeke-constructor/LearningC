



#ifndef CY
#define CY

int cy_COMP_COUNT = 0;

#define cy_MAX_SYSTEMS 100


/*

components are accessed as arrays:
cy_arr_componentName[n];
cy_id_componentName;    the int id of the component


callbacks are accessed as arrays:

cy_funcarr_callbackName [n]

*/



#define cy_registerComponent(type, compname) \
type* cy_arr_ ## compname; \
short cy_id_ ## compname = cy_COMP_COUNT++; \


#define cy_getID(compname) cy_id_ ## compname



#define cy_registerCallback(returnType, callbackName, ...) \
returnType (* cy_funcarr_ ## callbackName[cy_MAX_SYSTEMS]) (__VA_ARGS__)


cy_registerCallback(void, update, int dt);


typedef struct {
    static const void (*destroy) (cy_Entity)
    short *components;
    /*
    components will be a list of ints. { [comp_id] = id_in_array }
    */
} cy_Entity;


#define cyx(entity, compname) \
#ifdef DEBUG \
if(entity->components.len > cy_getID(compname)){    \
    printf("Error: attempted to access component not in ent bounds") \
}                                                   \
#endif                                              \
cy_arr_ ## compname [entity->components[cy_id_ ## compname]]





#endif





