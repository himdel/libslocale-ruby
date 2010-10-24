#include <locale.h>
#include "ruby.h"

static VALUE
t_init(VALUE self) {
}

static VALUE
t_getlocale(VALUE self) {
	return setlocale(LC_ALL, NULL);
}

static VALUE
t_setlocale(VALUE self, VALUE obj) {
	return setlocale(LC_ALL, NULL);
}


VALUE slocale;

void
Init_slocale() {
	slocale = rb_define_class("SLocale", rb_cObject);
	rb_define_method(slocale, "initialize", t_init, 0);
	rb_define_method(slocale, "locale", t_getlocale, 0);
	rb_define_method(slocale, "locale=", t_setlocale, 1);
	return 0;
}
