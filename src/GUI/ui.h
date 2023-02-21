// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: test1

#ifndef _TEST1_UI_H
#define _TEST1_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

void move_Animation(lv_obj_t * TargetObject, int delay);
void move2_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Screen2(lv_event_t * e);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Panel4BG;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label2;
void ui_event_Screen1(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Keyboard2;
void ui_event_TextArea2(lv_event_t * e);
extern lv_obj_t * ui_TextArea2;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Screen3(lv_event_t * e);
extern lv_obj_t * ui_Screen3;
extern lv_obj_t * ui_Roller2;
extern lv_obj_t * ui_Checkbox2;
extern lv_obj_t * ui_Slider2;
extern lv_obj_t * ui_Dropdown1;
extern lv_obj_t * ui_Spinner1;


LV_IMG_DECLARE(ui_img_nadeigo__png);    // assets\nadeigo .png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
