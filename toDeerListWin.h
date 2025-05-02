#pragma once

#include <gtk/gtk.h>
#include "toDeerList.h"


#define TODEERLIST_WINDOW_TYPE (to_deer_list_window_get_type ())
G_DECLARE_FINAL_TYPE (ToDeerListWindow, to_deer_list_window, TODEERLIST, APP_WINDOW, GtkApplicationWindow)


ToDeerListWindow       *to_deer_list_window_new          (ToDeerList *app);
void                    to_deer_list_window_open         (ToDeerListWindow *win, GFile *file);
