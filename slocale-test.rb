#!/usr/bin/ruby
require 'slocale'
def f
	puts [ SLocale.locale, Time.now.strftime("%x"), 5.4.to_s, Time.now.to_s ]
	puts
end

f
SLocale.locale = ''
f
SLocale.locale = 'cs_CZ.UTF-8'
f
