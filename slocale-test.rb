#!/usr/bin/ruby
require 'slocale'

puts 'G:'+SLocale.locale
puts 'S:'+SLocale.locale=""
puts 'G:'+SLocale.locale
puts 'S:'+SLocale.locale="cs_CZ.UTF-8"
puts 'G:'+SLocale.locale
puts 'S:'+SLocale.locale="C"
puts 'G:'+SLocale.locale
