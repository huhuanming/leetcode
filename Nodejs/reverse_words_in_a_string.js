var reverseWords = function(str) {
    return str.split(/\s+/).reverse().join(' ').trim()
};

module.exports = reverseWords;