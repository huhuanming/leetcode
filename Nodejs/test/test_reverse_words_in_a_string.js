var assert = require('chai').assert;
var reverseWords = require('../reverse_words_in_a_string');

describe('ReverseWordsInAString', function() {
  it('test reverseWords', function() {
	  [
	    'the sky is blue',
	    ' the sky is blue ',
	    ' the sky     is blue '
	  ].forEach(function(string){
	  	assert.equal('blue is sky the', reverseWords(string));
	  });
  });
});