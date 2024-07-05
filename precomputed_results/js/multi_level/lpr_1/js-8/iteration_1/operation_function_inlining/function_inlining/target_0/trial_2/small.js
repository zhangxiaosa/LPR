function opt() {
    const a = [];
    const b = a.__proto__;
    const c = b.toLocaleString();

    // Remove try-catch since there's no longer an exception to catch
    // The empty catch block doesn't serve any purpose
    return function() {};
}