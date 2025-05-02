#include <gtk/gtk.h>

#include "toDeerList.h"

int main (int argc, char **argv) {

    return g_application_run(G_APPLICATION (toDeerList_app_new()), argc, argv);
}