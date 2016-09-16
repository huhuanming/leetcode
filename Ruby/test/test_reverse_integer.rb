require './reverse_integer.rb'
require 'test/unit'

class TestReverseInteger < Test::Unit::TestCase
  def test_reverse_string
    assert_equal(1234, reverse(4321))
    assert_equal(-1234, reverse(-4321))
    assert_equal(1, reverse(1000))
    assert_equal(0, reverse(1_534_236_469))
    assert_equal(0, reverse(1_563_847_412))
    assert_equal(0, reverse(-1_563_847_412))
  end
end
