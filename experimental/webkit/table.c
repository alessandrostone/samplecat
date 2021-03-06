/* table.c generated by valac 0.28.1, the Vala compiler
 * generated from table.vala, do not modify */

/*
  This file is part of Samplecat. http://samplecat.orford.org
  copyright (C) 2007-2016 Tim Orford

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 3
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#include <glib.h>
#include <glib-object.h>
#include <webkit/webkit.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_TABLE (table_get_type ())
#define TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TABLE, Table))
#define TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TABLE, TableClass))
#define IS_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TABLE))
#define IS_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TABLE))
#define TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TABLE, TableClass))

typedef struct _Table Table;
typedef struct _TableClass TableClass;
typedef struct _TablePrivate TablePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Table {
	GObject parent_instance;
	TablePrivate * priv;
	WebKitDOMElement* el;
	WebKitDOMElement* tbody;
	WebKitDOMElement* thead;
};

struct _TableClass {
	GObjectClass parent_class;
};


static gpointer table_parent_class = NULL;
extern WebKitDOMDocument* table_document;
WebKitDOMDocument* table_document = NULL;

GType table_get_type (void) G_GNUC_CONST;
enum  {
	TABLE_DUMMY_PROPERTY
};
Table* table_new (WebKitDOMElement* parent, const gchar* id);
Table* table_construct (GType object_type, WebKitDOMElement* parent, const gchar* id);
void table_clear (Table* self);
static GObject * table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void table_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


Table* table_construct (GType object_type, WebKitDOMElement* parent, const gchar* id) {
	Table * self = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (id != NULL, NULL);
	self = (Table*) g_object_new (object_type, NULL);
	{
		WebKitDOMElement* _tmp0_ = NULL;
		const gchar* _tmp1_ = NULL;
		WebKitDOMElement* _tmp2_ = NULL;
		WebKitDOMElement* _tmp3_ = NULL;
		WebKitDOMElement* _tmp4_ = NULL;
		WebKitDOMDocument* _tmp5_ = NULL;
		WebKitDOMElement* _tmp6_ = NULL;
		WebKitDOMElement* _tmp7_ = NULL;
		WebKitDOMElement* _tmp8_ = NULL;
		WebKitDOMElement* _tmp9_ = NULL;
		WebKitDOMElement* _tmp10_ = NULL;
		WebKitDOMDocument* _tmp11_ = NULL;
		WebKitDOMElement* _tmp12_ = NULL;
		WebKitDOMElement* _tmp13_ = NULL;
		WebKitDOMElement* _tmp14_ = NULL;
		WebKitDOMElement* _tmp15_ = NULL;
		_tmp0_ = self->el;
		_tmp1_ = id;
		webkit_dom_element_set_attribute (_tmp0_, "id", _tmp1_, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp2_ = parent;
		_tmp3_ = self->el;
		webkit_dom_node_append_child ((WebKitDOMNode*) _tmp2_, G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, WEBKIT_TYPE_DOM_NODE, WebKitDOMNode), &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp5_ = table_document;
		_tmp6_ = webkit_dom_document_create_element (_tmp5_, "thead", &_inner_error_);
		_tmp4_ = _tmp6_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp7_ = self->el;
		_tmp8_ = _g_object_ref0 (_tmp4_);
		_g_object_unref0 (self->thead);
		self->thead = _tmp8_;
		_tmp9_ = self->thead;
		webkit_dom_node_append_child ((WebKitDOMNode*) _tmp7_, (WebKitDOMNode*) _tmp9_, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp11_ = table_document;
		_tmp12_ = webkit_dom_document_create_element (_tmp11_, "tbody", &_inner_error_);
		_tmp10_ = _tmp12_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp13_ = self->el;
		_tmp14_ = _g_object_ref0 (_tmp10_);
		_g_object_unref0 (self->tbody);
		self->tbody = _tmp14_;
		_tmp15_ = self->tbody;
		webkit_dom_node_append_child ((WebKitDOMNode*) _tmp13_, (WebKitDOMNode*) _tmp15_, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally0:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	return self;
}


Table* table_new (WebKitDOMElement* parent, const gchar* id) {
	return table_construct (TYPE_TABLE, parent, id);
}


void table_clear (Table* self) {
	WebKitDOMHTMLTableElement* table = NULL;
	WebKitDOMElement* _tmp0_ = NULL;
	WebKitDOMHTMLTableElement* _tmp1_ = NULL;
	WebKitDOMHTMLCollection* rows = NULL;
	WebKitDOMElement* _tmp2_ = NULL;
	WebKitDOMHTMLCollection* _tmp3_ = NULL;
	WebKitDOMHTMLCollection* _tmp4_ = NULL;
	WebKitDOMHTMLCollection* _tmp5_ = NULL;
	gulong _tmp6_ = 0UL;
	gulong _tmp7_ = 0UL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->el;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, WEBKIT_TYPE_DOM_HTML_TABLE_ELEMENT, WebKitDOMHTMLTableElement));
	table = _tmp1_;
	_tmp2_ = self->el;
	_tmp3_ = webkit_dom_html_table_element_get_rows (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, WEBKIT_TYPE_DOM_HTML_TABLE_ELEMENT, WebKitDOMHTMLTableElement));
	_tmp4_ = _g_object_ref0 (_tmp3_);
	rows = _tmp4_;
	_tmp5_ = rows;
	_tmp6_ = webkit_dom_html_collection_get_length (_tmp5_);
	_tmp7_ = _tmp6_;
	g_print ("rows=%lu", _tmp7_);
	{
		{
			gulong i = 0UL;
			WebKitDOMHTMLCollection* _tmp8_ = NULL;
			gulong _tmp9_ = 0UL;
			gulong _tmp10_ = 0UL;
			_tmp8_ = rows;
			_tmp9_ = webkit_dom_html_collection_get_length (_tmp8_) - 1;
			_tmp10_ = _tmp9_;
			i = _tmp10_;
			{
				gboolean _tmp11_ = FALSE;
				_tmp11_ = TRUE;
				while (TRUE) {
					gulong _tmp13_ = 0UL;
					WebKitDOMHTMLTableElement* _tmp14_ = NULL;
					gulong _tmp15_ = 0UL;
					if (!_tmp11_) {
						gulong _tmp12_ = 0UL;
						_tmp12_ = i;
						i = _tmp12_ - 1;
					}
					_tmp11_ = FALSE;
					_tmp13_ = i;
					if (!(_tmp13_ >= ((gulong) 1))) {
						break;
					}
					_tmp14_ = table;
					_tmp15_ = i;
					webkit_dom_html_table_element_delete_row (_tmp14_, (glong) _tmp15_, &_inner_error_);
					if (G_UNLIKELY (_inner_error_ != NULL)) {
						goto __catch1_g_error;
					}
				}
			}
		}
	}
	goto __finally1;
	__catch1_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally1:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_object_unref0 (rows);
		_g_object_unref0 (table);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_g_object_unref0 (rows);
	_g_object_unref0 (table);
}


static GObject * table_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	Table * self;
	GError * _inner_error_ = NULL;
	parent_class = G_OBJECT_CLASS (table_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TABLE, Table);
	{
		WebKitDOMElement* _tmp0_ = NULL;
		WebKitDOMDocument* _tmp1_ = NULL;
		WebKitDOMElement* _tmp2_ = NULL;
		WebKitDOMElement* _tmp3_ = NULL;
		_tmp1_ = table_document;
		_tmp2_ = webkit_dom_document_create_element (_tmp1_, "table", &_inner_error_);
		_tmp0_ = _tmp2_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch2_g_error;
		}
		_tmp3_ = _g_object_ref0 (_tmp0_);
		_g_object_unref0 (self->el);
		self->el = _tmp3_;
	}
	goto __finally2;
	__catch2_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally2:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
	}
	return obj;
}


static void table_class_init (TableClass * klass) {
	table_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->constructor = table_constructor;
	G_OBJECT_CLASS (klass)->finalize = table_finalize;
}


static void table_instance_init (Table * self) {
}


static void table_finalize (GObject* obj) {
	Table * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TABLE, Table);
	_g_object_unref0 (self->el);
	_g_object_unref0 (self->tbody);
	_g_object_unref0 (self->thead);
	G_OBJECT_CLASS (table_parent_class)->finalize (obj);
}


GType table_get_type (void) {
	static volatile gsize table_type_id__volatile = 0;
	if (g_once_init_enter (&table_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Table), 0, (GInstanceInitFunc) table_instance_init, NULL };
		GType table_type_id;
		table_type_id = g_type_register_static (G_TYPE_OBJECT, "Table", &g_define_type_info, 0);
		g_once_init_leave (&table_type_id__volatile, table_type_id);
	}
	return table_type_id__volatile;
}



