#include <gtk/gtk.h>

#include "toDeerList.h"
#include "toDeerListWin.h"

struct _ToDeerList {
  GtkApplication parent;
};

G_DEFINE_TYPE(ToDeerList, to_deer_list, GTK_TYPE_APPLICATION);

ToDeerList * toDeerList_app_new(void) {
  return g_object_new (
    TODEERLIST_TYPE,
    "application-id", 
    "theDeerList.omega",
    "flags", 
    G_APPLICATION_HANDLES_OPEN,
    NULL);

}

static void to_deer_list_init (ToDeerList *app) {

}

static void to_deer_list_activate(GApplication *app) {
  ToDeerListWindow *win;

  win = to_deer_list_window_new ((ToDeerList*)app);
  gtk_window_present (GTK_WINDOW (win));

}

static void
to_deer_list_open (GApplication  *app, GFile **files, int n_files, const char *hint)
{
  
}


static void to_deer_list_class_init (ToDeerListClass *class)
{
  G_APPLICATION_CLASS (class)->activate = to_deer_list_activate;
  G_APPLICATION_CLASS (class)->open = to_deer_list_open;
}