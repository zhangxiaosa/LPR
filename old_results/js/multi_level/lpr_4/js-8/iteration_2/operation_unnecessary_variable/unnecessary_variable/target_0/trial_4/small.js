function opt() {
    try {
        [].__proto__.unshift([].__proto__.toLocaleString());
    } catch {}
    return;
}