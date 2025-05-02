#pragma once

#include <gtk/gtk.h>

#define TODEERLIST_TYPE (to_deer_list_get_type ())

G_DECLARE_FINAL_TYPE (ToDeerList, to_deer_list, TODEERLIST, APP, GtkApplication)

ToDeerList     *toDeerList_app_new         (void);
