// Theme editor
#define THEME_EDITOR 0         // Enables setting and printing of theme colors

typedef struct {
  char *name;
  uint16_t bg;
  uint16_t text;
  uint16_t text_muted;
  uint16_t text_warn;

  uint16_t smeter_icon;
  uint16_t smeter_bar;
  uint16_t smeter_bar_plus;

  uint16_t save_icon;

  uint16_t batt_voltage;
  uint16_t batt_border;
  uint16_t batt_full;
  uint16_t batt_low;
  uint16_t batt_charge;
  uint16_t batt_icon;

  uint16_t Ster_icon;
  uint16_t Mono_icon;

  uint16_t band_text;

  uint16_t mode_text;
  uint16_t mode_border;

  uint16_t box_bg;
  uint16_t box_border;
  uint16_t box_text;
  uint16_t box_off_bg;
  uint16_t box_off_text;

  uint16_t menu_bg;
  uint16_t menu_border;
  uint16_t menu_hdr;
  uint16_t menu_item;
  uint16_t menu_hl_bg;
  uint16_t menu_hl_text;
  uint16_t menu_param;

  uint16_t freq_text;
  uint16_t funit_text;

  uint16_t rds_text;

  uint16_t scale_text;
  uint16_t scale_pointer;
  uint16_t scale_line;
} ColorTheme;

#if THEME_EDITOR
ColorTheme theme[] = {
#else
const ColorTheme theme[] = {
#endif
  {
    "Default",
    0x0000, // bg
    0xFFFF, // text
    0xD69A, // text_muted
    0xF800, // text_warn
    0xD69A, // smeter_icon
    0x07E0, // smeter_bar
    0xF800, // smeter_bar_plus
    0xF800, // save_icon
    0xFFFF, // batt_voltage
    0xFFFF, // batt_border
    0x07E0, // batt_full
    0xF800, // batt_low
    0x001F, // batt_charge
    0xFFE0, // batt_icon
    0xFFFF, // Ster_icon
    0xFFFF, // Mono_icon
    0xD69A, // band_text
    0xD69A, // mode_text
    0xD69A, // mode_border
    0x0000, // box_bg
    0xD69A, // box_border
    0xD69A, // box_text
    0xF800, // box_off_bg
    0xBEDF, // box_off_text
    0x0000, // menu_bg
    0xF800, // menu_border
    0xFFFF, // menu_hdr
    0xBEDF, // menu_item
    0x105B, // menu_hl_bg
    0xBEDF, // menu_hl_text
    0xBEDF, // menu_param
    0xFFFF, // freq_text
    0xD69A, // funit_text
    0xD69A, // rds_text
    0xFFFF, // scale_text
    0xF800, // scale_pointer
    0xC638, // scale_line
  },

  {
    "Bluesky",
    0x2293, // bg
    0xFFFF, // text
    0xD69A, // text_muted
    0xF800, // text_warn
    0xD69A, // smeter_icon
    0x07E0, // smeter_bar
    0xF800, // smeter_bar_plus
    0xF800, // save_icon
    0xFFFF, // batt_voltage
    0xFFFF, // batt_border
    0x07E0, // batt_full
    0xF800, // batt_low
    0x001F, // batt_charge
    0xFFE0, // batt_icon
    0xFFFF, // Ster_icon
    0xFFFF, // Mono_icon
    0xD69A, // band_text
    0xD69A, // mode_text
    0xD69A, // mode_border
    0x2293, // box_bg
    0xD69A, // box_border
    0xD69A, // box_text
    0xF800, // box_off_bg
    0xBEDF, // box_off_text
    0x2293, // menu_bg
    0xF800, // menu_border
    0xFFFF, // menu_hdr
    0xBEDF, // menu_item
    0xD69A, // menu_hl_bg
    0x2293, // menu_hl_text
    0xBEDF, // menu_param
    0xFFFF, // freq_text
    0xD69A, // funit_text
    0xD69A, // rds_text
    0xFFFF, // scale_text
    0xF800, // scale_pointer
    0xC638, // scale_line
  },

  {
    "eInk",
    0xC616, // bg
    0x3A08, // text
    0x632C, // text_muted
    0xF800, // text_warn
    0x18C3, // smeter_icon
    0x632C, // smeter_bar
    0x18C3, // smeter_bar_plus
    0x632C, // save_icon
    0x18C3, // batt_voltage
    0x0000, // batt_border
    0x632C, // batt_full
    0x3A08, // batt_low
    0xC616, // batt_charge
    0x3A08, // batt_icon
    0x3A08, // Ster_icon
    0x3A08, // Mono_icon
    0x3A08, // band_text
    0x632C, // mode_text
    0x632C, // mode_border
    0xC616, // box_bg
    0x3A08, // box_border
    0x3A08, // box_text
    0x632C, // box_off_bg
    0xC616, // box_off_text
    0xC616, // menu_bg
    0x3A08, // menu_border
    0x18C3, // menu_hdr
    0x3A08, // menu_item
    0x3A08, // menu_hl_bg
    0xC616, // menu_hl_text
    0x3A08, // menu_param
    0x3A08, // freq_text
    0x632C, // funit_text
    0x632C, // rds_text
    0x18C3, // scale_text
    0x0000, // scale_pointer
    0x632C, // scale_line
  },

  {
    "Pager",
    0x4309, // bg
    0x00C2, // text
    0x1165, // text_muted
    0xF800, // text_warn
    0x18C3, // smeter_icon
    0x1165, // smeter_bar
    0x00C2, // smeter_bar_plus
    0x18C3, // save_icon
    0x18C3, // batt_voltage
    0x0000, // batt_border
    0x1165, // batt_full
    0x00C2, // batt_low
    0x4309, // batt_charge
    0x00C2, // batt_icon
    0x00C2, // Ster_icon
    0x00C2, // Mono_icon
    0x00C2, // band_text
    0x00C2, // mode_text
    0x00C2, // mode_border
    0x4309, // box_bg
    0x00C2, // box_border
    0x00C2, // box_text
    0x00C2, // box_off_bg
    0x4309, // box_off_text
    0x4309, // menu_bg
    0x00C2, // menu_border
    0x18C3, // menu_hdr
    0x00C2, // menu_item
    0x00C2, // menu_hl_bg
    0x4309, // menu_hl_text
    0x00C2, // menu_param
    0x00C2, // freq_text
    0x1165, // funit_text
    0x1165, // rds_text
    0x18C3, // scale_text
    0x0000, // scale_pointer
    0x1165, // scale_line
  },

  {
    "Orange",
    0xF3C1, // bg
    0x18C3, // text
    0x2945, // text_muted
    0xF800, // text_warn
    0x18C3, // smeter_icon
    0x4208, // smeter_bar
    0x2945, // smeter_bar_plus
    0x4208, // save_icon
    0x18C3, // batt_voltage
    0x0000, // batt_border
    0x4208, // batt_full
    0x2945, // batt_low
    0xF3C1, // batt_charge
    0x18C3, // batt_icon
    0x18C3, // Ster_icon
    0x18C3, // Mono_icon
    0x18C3, // band_text
    0x2945, // mode_text
    0x2945, // mode_border
    0xF3C1, // box_bg
    0x2945, // box_border
    0x2945, // box_text
    0x2945, // box_off_bg
    0xF3C1, // box_off_text
    0xF3C1, // menu_bg
    0x18C3, // menu_border
    0x18C3, // menu_hdr
    0x2945, // menu_item
    0x2945, // menu_hl_bg
    0xF3C1, // menu_hl_text
    0x2945, // menu_param
    0x18C3, // freq_text
    0x2945, // funit_text
    0x2945, // rds_text
    0x18C3, // scale_text
    0x0000, // scale_pointer
    0x4208, // scale_line
  },

  {
    "Night",
    0x0000, // bg
    0xDA8A, // text
    0xB925, // text_muted
    0xF800, // text_warn
    0xB925, // smeter_icon
    0x8925, // smeter_bar
    0xF800, // smeter_bar_plus
    0xF800, // save_icon
    0xDA8A, // batt_voltage
    0xDA8A, // batt_border
    0x8925, // batt_full
    0xF800, // batt_low
    0x0000, // batt_charge
    0xF800, // batt_icon
    0xB925, // Ster_icon
    0xB925, // Mono_icon
    0xB925, // band_text
    0xB925, // mode_text
    0xB925, // mode_border
    0x0000, // box_bg
    0xB925, // box_border
    0xB925, // box_text
    0x70C3, // box_off_bg
    0xDA8A, // box_off_text
    0x0000, // menu_bg
    0xF800, // menu_border
    0xDA8A, // menu_hdr
    0xF800, // menu_item
    0x70C3, // menu_hl_bg
    0xDA8A, // menu_hl_text
    0xDA8A, // menu_param
    0xDA8A, // freq_text
    0xB925, // funit_text
    0xB925, // rds_text
    0xDA8A, // scale_text
    0xF800, // scale_pointer
    0xB925, // scale_line
  },

  {
    "Phosphor",
    0x0060, // bg
    0x07AD, // text
    0x052D, // text_muted
    0xF800, // text_warn
    0x052D, // smeter_icon
    0x052D, // smeter_bar
    0x07AD, // smeter_bar_plus
    0x2364, // save_icon
    0x052D, // batt_voltage
    0x07AD, // batt_border
    0x052D, // batt_full
    0x0309, // batt_low
    0x0060, // batt_charge
    0x07AD, // batt_icon
    0x052D, // Ster_icon
    0x052D, // Mono_icon
    0x052D, // band_text
    0x052D, // mode_text
    0x052D, // mode_border
    0x0060, // box_bg
    0x052D, // box_border
    0x052D, // box_text
    0x0309, // box_off_bg
    0x07AD, // box_off_text
    0x0060, // menu_bg
    0x2364, // menu_border
    0x07AD, // menu_hdr
    0x052D, // menu_item
    0x0309, // menu_hl_bg
    0x07AD, // menu_hl_text
    0x07AD, // menu_param
    0x07AD, // freq_text
    0x052D, // funit_text
    0x052D, // rds_text
    0x07AD, // scale_text
    0x5CF2, // scale_pointer
    0x2364, // scale_line
  },

 {
    "Winamp",
    0x2927, // bg
    0x6EA9, // text
    0x7BEF, // text_muted
    0xE68A, // text_warn
    0xE68A, // smeter_icon
    0xF3A6, // smeter_bar
    0xFA80, // smeter_bar_plus
    0xE68A, // save_icon
    0x7789, // batt_voltage
    0x0000, // batt_border
    0xF3A6, // batt_full
    0xF801, // batt_low
    0x0000, // batt_charge
    0xFFFF, // batt_icon
    0x7789, // Ster_icon
    0x7789, // Mono_icon
    0x7789, // band_text
    0x7789, // mode_text
    0x73D2, // mode_border
    0x2927, // box_bg
    0x2927, // box_border
    0xFFFF, // box_text
    0x2927, // box_off_bg
    0xFFFF, // box_off_text
    0x2927, // menu_bg
    0x2927, // menu_border
    0xE68A, // menu_hdr
    0xFFFF, // menu_item
    0x2927, // menu_hl_bg
    0xF3A6, // menu_hl_text
    0x7789, // menu_param
    0xFF23, // freq_text
    0x6F08, // funit_text
    0x6F08, // rds_text
    0xD6DB, // scale_text
    0xBAE5, // scale_pointer
    0xDE6A, // scale_line
  },

{
    "Girly",
    0xFC8E, // bg
    0xF808, // text
    0xBAF1, // text_muted
    0xF800, // text_warn
    0xF808, // smeter_icon
    0xF808, // smeter_bar
    0xB08D, // smeter_bar_plus
    0xD889, // save_icon
    0xD889, // batt_voltage
    0x4083, // batt_border
    0xE00B, // batt_full
    0xE000, // batt_low
    0xC8F1, // batt_charge
    0xD69A, // batt_icon
    0xE00B, // Ster_icon
    0xE00B, // Mono_icon
    0xE00B, // band_text
    0xE00B, // mode_text
    0x4083, // mode_border
    0xFC8E, // box_bg
    0xFC8E, // box_border
    0xF808, // box_text
    0xFC8E, // box_off_bg
    0xFFFF, // box_off_text
    0xFC8E, // menu_bg
    0x4083, // menu_border
    0xD69A, // menu_hdr
    0xC8EB, // menu_item
    0xFC8E, // menu_hl_bg
    0xF808, // menu_hl_text
    0xC8EB, // menu_param
    0xF808, // freq_text
    0xF808, // funit_text
    0xF808, // rds_text
    0xF808, // scale_text
    0xC8C2, // scale_pointer
    0xC9AB, // scale_line
  },

{
    "Modern",
    0x2A2C, // bg
    0xDEFA, // text
    0xDEFA, // text_muted
    0xFA86, // text_warn
    0xFDC8, // smeter_icon
    0xFDC8, // smeter_bar
    0xFDC8, // smeter_bar_plus
    0x4535, // save_icon
    0xFDE8, // batt_voltage
    0x0000, // batt_border
    0xFBC8, // batt_full
    0x8C51, // batt_low
    0x47F1, // batt_charge
    0xFFFF, // batt_icon
    0xDEFA, // Ster_icon
    0xDEFA, // Mono_icon
    0x4D15, // band_text
    0x4D15, // mode_text
    0x4083, // mode_border
    0x2A2C, // box_bg
    0x2A2C, // box_border
    0xDEFA, // box_text
    0x2A2C, // box_off_bg
    0xDEFA, // box_off_text
    0x2A2C, // menu_bg
    0x2A2C, // menu_border
    0xD69A, // menu_hdr
    0x4D15, // menu_item
    0x2A2C, // menu_hl_bg
    0xFDE8, // menu_hl_text
    0xDEFA, // menu_param
    0xFDE8, // freq_text
    0xDEFA, // funit_text
    0x758F, // rds_text
    0xDEFA, // scale_text
    0xFDE8, // scale_pointer
    0xFDE8, // scale_line
  }


};

const uint8_t lastTheme = (sizeof theme / sizeof(ColorTheme)) - 1;
uint8_t themeIdx = 0;
