/* GAIL - The MATE Accessibility Implementation Library
 * Copyright 2001 Sun Microsystems Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GAIL_CANVAS_ITEM_H__
#define __GAIL_CANVAS_ITEM_H__

#include <libmatecanvas/mate-canvas.h>
#include <atk/atk.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GAIL_TYPE_CANVAS_ITEM                  (gail_canvas_item_get_type ())
#define GAIL_CANVAS_ITEM(obj)                  (G_TYPE_CHECK_INSTANCE_CAST ((obj), GAIL_TYPE_CANVAS_ITEM, GailCanvasItem))
#define GAIL_CANVAS_ITEM_CLASS(klass)          (G_TYPE_CHECK_CLASS_CAST ((klass), GAIL_TYPE_CANVAS_ITEM, GailCanvasItemClass))
#define GAIL_IS_CANVAS_ITEM(obj)               (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GAIL_TYPE_CANVAS_ITEM))
#define GAIL_IS_CANVAS_ITEM_CLASS(klass)       (G_TYPE_CHECK_CLASS_TYPE ((klass), GAIL_TYPE_CANVAS_ITEM))
#define GAIL_CANVAS_ITEM_GET_CLASS(obj)        (G_TYPE_INSTANCE_GET_CLASS ((obj), GAIL_TYPE_CANVAS_ITEM, GailCanvasItemClass))

typedef struct _GailCanvasItem                 GailCanvasItem;
typedef struct _GailCanvasItemClass            GailCanvasItemClass;

struct _GailCanvasItem
{
  AtkGObjectAccessible parent;
};

GType gail_canvas_item_get_type (void);

struct _GailCanvasItemClass
{
  AtkGObjectAccessibleClass parent_class;
};

AtkObject* gail_canvas_item_new (GObject *obj);

#ifdef __cplusplus
}
#endif

#endif /* __GAIL_CANVAS_ITEM_H__ */
