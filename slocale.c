#include <locale.h>
#include "ruby.h"

static VALUE
t_getlocale(VALUE self) {
	char *s = setlocale(LC_ALL, NULL);
	return rb_str_new(s, strlen(s));
}

static VALUE
t_setlocale(VALUE self, VALUE obj) {
	Check_Type(obj, T_STRING);
	char *s = setlocale(LC_ALL, RSTRING_PTR(obj));
	return rb_str_new(s, strlen(s));
}


VALUE slocale;

void
Init_slocale() {
	slocale = rb_define_class("SLocale", rb_cObject);
	rb_define_singleton_method(slocale, "locale", t_getlocale, 0);
	rb_define_singleton_method(slocale, "locale=", t_setlocale, 1);
}
