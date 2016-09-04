require './reverse_string.rb'
require 'test/unit'

class TestReverseString < Test::Unit::TestCase
  def test_reverse_string
    assert_equal('olleh', reverse_string('hello'))
  end
end
