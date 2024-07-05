function opt() {
    try {
        [].__proto__.unshift([].__proto__.toLocaleString());
    } catch {
        // No need to define unused function e()
    }
    return undefined;
}