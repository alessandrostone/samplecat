/**
* +----------------------------------------------------------------------+
* | This file is part of Samplecat. http://ayyi.github.io/samplecat/     |
* | copyright (C) 2007-2015 Tim Orford <tim@orford.org>                  |
* +----------------------------------------------------------------------+
* | This program is free software; you can redistribute it and/or modify |
* | it under the terms of the GNU General Public License version 3       |
* | as published by the Free Software Foundation.                        |
* +----------------------------------------------------------------------+
*
*/
#ifndef __samplecat_dnd_h__
#define __samplecat_dnd_h__
#include <gtk/gtk.h>

enum {
  TARGET_APP_COLLECTION_MEMBER,
  TARGET_URI_LIST,
  TARGET_TEXT_PLAIN
};

#ifdef __dnd_c__
GtkTargetEntry dnd_file_drag_types[] = {
      { "text/uri-list", 0, TARGET_URI_LIST },
    //{ "text/plain", 0, TARGET_TEXT_PLAIN }
};
gint dnd_file_drag_types_count = 1;
#else
extern GtkTargetEntry dnd_file_drag_types[1];
extern gint dnd_file_drag_types_count;
#endif

void     dnd_setup    ();
gint     drag_received(GtkWidget*, GdkDragContext*, gint x, gint y, GtkSelectionData*, guint info, guint time, gpointer user_data);
gint     drag_motion  (GtkWidget*, GdkDragContext*, gint x, gint y, guint time, gpointer user_data);
#endif
