#include "breakout_bme68x.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// BreakoutBME68X Class
////////////////////////////////////////////////////////////////////////////////////////////////////

/***** Methods *****/
MP_DEFINE_CONST_FUN_OBJ_1(BreakoutBME68X_read_obj, BreakoutBME68X_read);

/***** Binding of Methods *****/
STATIC const mp_rom_map_elem_t BreakoutBME68X_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_read), MP_ROM_PTR(&BreakoutBME68X_read_obj) },
};
STATIC MP_DEFINE_CONST_DICT(BreakoutBME68X_locals_dict, BreakoutBME68X_locals_dict_table);

/***** Class Definition *****/
const mp_obj_type_t breakout_bme68x_BreakoutBME68X_type = {
    { &mp_type_type },
    .name = MP_QSTR_breakout_bme68x,
    .print = BreakoutBME68X_print,
    .make_new = BreakoutBME68X_make_new,
    .locals_dict = (mp_obj_dict_t*)&BreakoutBME68X_locals_dict,
};


////////////////////////////////////////////////////////////////////////////////////////////////////
// breakout_bme68x Module
////////////////////////////////////////////////////////////////////////////////////////////////////

/***** Globals Table *****/
STATIC const mp_map_elem_t breakout_bme68x_globals_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_breakout_bme68x) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_BreakoutBME68X), (mp_obj_t)&breakout_bme68x_BreakoutBME68X_type },
};
STATIC MP_DEFINE_CONST_DICT(mp_module_breakout_bme68x_globals, breakout_bme68x_globals_table);

/***** Module Definition *****/
const mp_obj_module_t breakout_bme68x_user_cmodule = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_breakout_bme68x_globals,
};

////////////////////////////////////////////////////////////////////////////////////////////////////
MP_REGISTER_MODULE(MP_QSTR_breakout_bme68x, breakout_bme68x_user_cmodule, MODULE_BREAKOUT_BME68X_ENABLED);
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////