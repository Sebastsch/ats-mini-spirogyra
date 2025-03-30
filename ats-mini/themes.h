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
    0x0000, // bg : fond noir pour rappeler l’obscurité du skin Winamp
    0xFFFF, // text : texte blanc pour un bon contraste
    0x7BEF, // text_muted : gris bleuté pour les textes secondaires
    0xF800, // text_warn : rouge vif pour les alertes et avertissements
    0x001F, // smeter_icon : bleu pour rappeler les accents lumineux
    0x001F, // smeter_bar : bleu pour une cohérence graphique
    0xFFFF, // smeter_bar_plus : blanc pour mettre en évidence certains niveaux
    0xF81F, // save_icon : magenta, mélange de rouge et de bleu, pour un look rétro
    0x7BEF, // batt_voltage : gris bleuté pour l’indicateur de tension
    0xF81F, // batt_border : magenta pour souligner le contour
    0x7BEF, // batt_full : gris bleuté indiquant une batterie pleine
    0xF800, // batt_low : rouge vif pour signaler une batterie faible
    0x0000, // batt_charge : noir, afin de garder l’homogénéité du fond
    0xFFFF, // batt_icon : blanc pour l’icône de batterie
    0x7BEF, // band_text : gris bleuté pour le texte de la bande
    0x7BEF, // mode_text : gris bleuté pour le mode d’affichage
    0x7BEF, // mode_border : gris bleuté pour le contour du mode
    0x0000, // box_bg : fond noir pour les zones de contenu
    0x7BEF, // box_border : gris bleuté pour délimiter les boîtes
    0xFFFF, // box_text : texte blanc à l’intérieur des boîtes
    0xF800, // box_off_bg : rouge vif pour signaler les zones désactivées
    0xFFFF, // box_off_text : texte blanc pour une bonne lisibilité même désactivé
    0x0000, // menu_bg : fond noir pour le menu
    0xF81F, // menu_border : magenta pour encadrer le menu
    0xFFFF, // menu_hdr : texte blanc pour l’en-tête du menu
    0x7BEF, // menu_item : gris bleuté pour les éléments du menu
    0xF800, // menu_hl_bg : rouge vif pour le surlignage des éléments sélectionnés
    0xFFFF, // menu_hl_text : texte blanc sur fond surligné
    0xFFFF, // menu_param : blanc pour les paramètres du menu
    0xFFFF, // freq_text : blanc pour le texte de fréquence
    0x7BEF, // funit_text : gris bleuté pour l’unité de fréquence
    0x7BEF, // rds_text : gris bleuté pour le texte RDS
    0xFFFF, // scale_text : blanc pour le texte de l’échelle
    0xFFFF, // scale_pointer : blanc pour le pointeur de l’échelle
    0xFFFF, // scale_line : blanc pour la ligne de l’échelle
  },

{
    "Girly",
    0xFC8E, // bg : rose pastel pour le fond
    0xF808, // text : rose gold pour le texte principal
    0xBAF1, // text_muted : lavande douce pour le texte atténué
    0xF800, // text_warn : rouge vif pour les avertissements
    0xF808, // smeter_icon : lavande douce pour l'icône du smètre
    0xF808, // smeter_bar : lavande douce pour la barre du smètre
    0xB08D, // smeter_bar_plus : rose gold pour la partie complémentaire du smètre
    0xD889, // save_icon : rose vif pour l'icône de sauvegarde
    0xD889, // batt_voltage : lavande douce pour l'indicateur de tension de batterie
    0x4083, // batt_border : rose gold pour le contour de la batterie
    0xE00B, // batt_full : lavande douce indiquant une batterie pleine
    0xE000, // batt_low : rouge vif pour signaler une batterie faible
    0xC8F1, // batt_charge : rose pastel pour l'état de charge
    0xD69A, // batt_icon : rose gold pour l'icône de batterie
    0xE00B, // band_text : lavande douce pour le texte de la bande
    0xFFFF, // mode_text : lavande douce pour le texte du mode
    0x4083, // mode_border : lavande douce pour le contour du mode
    0xFC8E, // box_bg : rose pastel pour le fond des boîtes
    0xFC8E, // box_border : lavande douce pour le contour des boîtes
    0xF808, // box_text : lavande douce pour le texte dans les boîtes
    0xFC8E, // box_off_bg : rouge vif pour les boîtes désactivées
    0xFFFF, // box_off_text : rose gold pour le texte désactivé
    0xFC8E, // menu_bg : rose pastel pour le fond du menu
    0x4083, // menu_border : rose vif pour le contour du menu
    0xD69A, // menu_hdr : rose gold pour l'en-tête du menu
    0xC8EB, // menu_item : lavande douce pour les items du menu
    0xFC8E, // menu_hl_bg : rouge vif pour le fond de sélection
    0xF808, // menu_hl_text : rose gold pour le texte sélectionné
    0xC8EB, // menu_param : rose gold pour les paramètres du menu
    0xF808, // freq_text : rose gold pour le texte de fréquence
    0xF808, // funit_text : lavande douce pour l'unité de fréquence
    0xF808, // rds_text : lavande douce pour le texte RDS
    0xF808, // scale_text : rose gold pour le texte de l'échelle
    0xC8C2, // scale_pointer : rose vif pour le pointeur de l'échelle
    0xC9AB, // scale_line : rose vif pour la ligne de l'échelle
  }

};

const uint8_t lastTheme = (sizeof theme / sizeof(ColorTheme)) - 1;
uint8_t themeIdx = 0;
