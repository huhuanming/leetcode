require './reverse_words_in_a_string.rb'
require 'test/unit'

class TestReverseWordsInAString < Test::Unit::TestCase
  def test_reverse_words_in_a_string
    strings = [
      'the sky is blue',
      ' the sky is blue ',
      ' the sky     is blue '
    ]
    strings.each do |string|
      assert_equal('blue is sky the', reverse_words_in_a_string(string))
    end
  end
end
