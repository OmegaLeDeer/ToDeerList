#include <gtk/gtk.h>

#include "toDeerList.h"

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