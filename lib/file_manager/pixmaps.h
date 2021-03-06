/**
* +----------------------------------------------------------------------+
* | This file is part of the Ayyi project. http://ayyi.org               |
* | copyright (C) 2011-2017 Tim Orford <tim@orford.org>                  |
* | copyright (C) 2006, Thomas Leonard and others                        |
* +----------------------------------------------------------------------+
* | This program is free software; you can redistribute it and/or modify |
* | it under the terms of the GNU General Public License version 3       |
* | as published by the Free Software Foundation.                        |
* +----------------------------------------------------------------------+
*
*/
#ifndef __pixmap_h__
#define __pixmap_h__

#include <gtk/gtk.h>

extern GFSCache *pixmap_cache;

extern MaskedPixmap *im_error;
extern MaskedPixmap *im_unknown;
extern MaskedPixmap *im_symlink;

extern MaskedPixmap *im_unmounted;
extern MaskedPixmap *im_mounted;
extern MaskedPixmap *im_exec_file;
extern MaskedPixmap *im_appdir;
extern MaskedPixmap *im_xattr;

extern MaskedPixmap *im_dirs;

/* If making the huge size larger, be sure to update SMALL_IMAGE_THRESHOLD! */
#define HUGE_WIDTH 96
#define HUGE_HEIGHT 96

#define ICON_HEIGHT 52
#define ICON_WIDTH 48

#define SMALL_HEIGHT 18
#define SMALL_WIDTH 22

typedef struct _MaskedPixmapClass MaskedPixmapClass;

struct _MaskedPixmapClass {
	GObjectClass parent;
};

/* When a MaskedPixmap is created we load the image from disk and
 * scale the pixbuf down to the 'huge' size (if it's bigger).
 * The 'normal' pixmap and mask are created automatically - you have
 * to request the other sizes.
 *
 * Note that any of the masks be also be NULL if the image has no
 * mask.
 */
struct _MaskedPixmap
{
    GObject     object;

    GdkPixbuf*  src_pixbuf;   // Limited to 'huge' size

    // If huge_pixbuf is NULL then call pixmap_make_huge()
    GdkPixbuf*  huge_pixbuf;
    GdkPixbuf*  huge_pixbuf_lit;
    int         huge_width, huge_height;

    GdkPixbuf*  pixbuf;       // Normal size image, always valid
    GdkPixbuf*  pixbuf_lit;
    int         width, height;

    // If sm_pixbuf is NULL then call pixmap_make_small()
    GdkPixbuf*  sm_pixbuf;
    GdkPixbuf*  sm_pixbuf_lit;
    int         sm_width, sm_height;
};

void          pixmaps_init            (void);
void          pixmap_make_huge        (MaskedPixmap *mp);
void          pixmap_make_small       (MaskedPixmap *mp);
MaskedPixmap* load_pixmap             (const char *name);
void          pixmap_background_thumb (const gchar *path, GFunc callback, gpointer data);
MaskedPixmap* masked_pixmap_new       (GdkPixbuf *full_size);
GdkPixbuf*    scale_pixbuf            (GdkPixbuf *src, int max_w, int max_h);

//GdkPixbuf* create_spotlight_pixbuf(GdkPixbuf *src, guint32 color, guchar alpha);

#endif
