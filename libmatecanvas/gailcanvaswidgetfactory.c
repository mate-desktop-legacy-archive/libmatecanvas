/* GAIL - The MATE Accessibility Implementation Library
 * Copyright 2001 Sun Microsystems Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "gailcanvaswidgetfactory.h"
#include "gailcanvaswidget.h"

static void gail_canvas_widget_factory_class_init (GailCanvasWidgetFactoryClass *klass);

static AtkObject * gail_canvas_widget_factory_create_accessible (GObject *obj);

static GType gail_canvas_widget_factory_get_accessible_type (void);

G_DEFINE_TYPE (GailCanvasWidgetFactory,
	       gail_canvas_widget_factory,
	       ATK_TYPE_OBJECT_FACTORY);

static void
gail_canvas_widget_factory_init (GailCanvasWidgetFactory *foo)
{
  ;
}

static void 
gail_canvas_widget_factory_class_init (GailCanvasWidgetFactoryClass *klass)
{
  AtkObjectFactoryClass *class = ATK_OBJECT_FACTORY_CLASS (klass);

  class->create_accessible = gail_canvas_widget_factory_create_accessible;
  class->get_accessible_type = gail_canvas_widget_factory_get_accessible_type;
}

static AtkObject* 
gail_canvas_widget_factory_create_accessible (GObject   *obj)
{
  return gail_canvas_widget_new (obj);
}

static GType
gail_canvas_widget_factory_get_accessible_type (void)
{
  return GAIL_TYPE_CANVAS_WIDGET;
}
