/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const Hello = "Hello World";
    return function() {
        return Hello;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */