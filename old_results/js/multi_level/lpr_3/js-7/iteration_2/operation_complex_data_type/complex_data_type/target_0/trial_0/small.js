function opt() {
    const b_target = [];
    const b_handler = {};
    b_target.valueOf = () => {};
    return isFinite(b_target);
}