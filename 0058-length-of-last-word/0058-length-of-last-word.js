/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    const last = s.trim().split(" ").at(-1)
    return last.length;
};