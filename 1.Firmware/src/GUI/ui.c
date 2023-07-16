// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: test1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void move_Animation(lv_obj_t * TargetObject, int delay);
void move2_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Screen2(lv_event_t * e);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Panel4BG;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label2;
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Keyboard2;
void ui_event_TextArea2(lv_event_t * e);
lv_obj_t * ui_TextArea2;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
void ui_event_Screen3(lv_event_t * e);
lv_obj_t * ui_Screen3;
lv_obj_t * ui_Roller2;
lv_obj_t * ui_Checkbox2;
lv_obj_t * ui_Slider2;
lv_obj_t * ui_Dropdown1;
lv_obj_t * ui_Spinner1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void move_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 240, 60);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void move2_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 60, 240);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_TextArea2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_Keyboard2,  ui_TextArea2);
        move_Animation(ui_Keyboard2, 0);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        move2_Animation(ui_Keyboard2, 0);
    }
}
void ui_event_Screen3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_OVER_LEFT, 500, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_OVER_RIGHT, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4BG = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel4BG, 224);
    lv_obj_set_height(ui_Panel4BG, 232);
    lv_obj_set_align(ui_Panel4BG, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4BG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel2 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel2, 150);
    lv_obj_set_height(ui_Panel2, 150);
    lv_obj_set_x(ui_Panel2, -2);
    lv_obj_set_y(ui_Panel2, -38);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image2 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image2, &ui_img_nadeigo__png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 128
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 128
    lv_obj_set_x(ui_Image2, -3);
    lv_obj_set_y(ui_Image2, -39);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel1 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel1, 190);
    lv_obj_set_height(ui_Panel1, 70);
    lv_obj_set_x(ui_Panel1, 1);
    lv_obj_set_y(ui_Panel1, 78);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_COLUMN_WRAP_REVERSE);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label2 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 3);
    lv_obj_set_y(ui_Label2, 79);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "This Deno designed\n				 by _Tracker\nBiliBli:@_TRACKER\nGitHub:@_TRACKER");
    lv_obj_set_style_text_align(ui_Label2, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);

}
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Keyboard2 = lv_keyboard_create(ui_Screen1);
    lv_obj_set_width(ui_Keyboard2, 233);
    lv_obj_set_height(ui_Keyboard2, 116);
    lv_obj_set_x(ui_Keyboard2, -1);
    lv_obj_set_y(ui_Keyboard2, 59);
    lv_obj_set_align(ui_Keyboard2, LV_ALIGN_CENTER);

    ui_TextArea2 = lv_textarea_create(ui_Screen1);
    lv_obj_set_width(ui_TextArea2, 150);
    lv_obj_set_height(ui_TextArea2, 70);
    lv_obj_set_x(ui_TextArea2, 31);
    lv_obj_set_y(ui_TextArea2, -51);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextArea2, "Placeholder...");

    ui_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button2, 48);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, -82);
    lv_obj_set_y(ui_Button2, -48);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_TextArea2, ui_event_TextArea2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

}
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Roller2 = lv_roller_create(ui_Screen3);
    lv_roller_set_options(ui_Roller2, "Option 1\nOption 2\nOption 3", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller2, 100);
    lv_obj_set_width(ui_Roller2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller2, -56);
    lv_obj_set_y(ui_Roller2, -51);
    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);

    ui_Checkbox2 = lv_checkbox_create(ui_Screen3);
    lv_obj_set_width(ui_Checkbox2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Checkbox2, 55);
    lv_obj_set_y(ui_Checkbox2, -83);
    lv_obj_set_align(ui_Checkbox2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Slider2 = lv_slider_create(ui_Screen3);
    lv_obj_set_width(ui_Slider2, 167);
    lv_obj_set_height(ui_Slider2, 10);
    lv_obj_set_x(ui_Slider2, -3);
    lv_obj_set_y(ui_Slider2, 92);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_CENTER);

    ui_Dropdown1 = lv_dropdown_create(ui_Screen3);
    lv_obj_set_width(ui_Dropdown1, 150);
    lv_obj_set_height(ui_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Dropdown1, -29);
    lv_obj_set_y(ui_Dropdown1, 38);
    lv_obj_set_align(ui_Dropdown1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Spinner1 = lv_spinner_create(ui_Screen3, 1000, 90);
    lv_obj_set_width(ui_Spinner1, 70);
    lv_obj_set_height(ui_Spinner1, 70);
    lv_obj_set_x(ui_Spinner1, 55);
    lv_obj_set_y(ui_Spinner1, -28);
    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    lv_obj_add_event_cb(ui_Screen3, ui_event_Screen3, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen2_screen_init();
    ui_Screen1_screen_init();
    ui_Screen3_screen_init();
    lv_disp_load_scr(ui_Screen2);
}
