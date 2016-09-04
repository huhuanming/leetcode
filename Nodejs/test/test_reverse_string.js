var assert = require('chai').assert;
var reverseString = require('../reverse_string');

describe('TestReverseString', function() {
  it('test reverseString', function() {
    assert.equal('olleh', reverseString('hello'));
  });
});