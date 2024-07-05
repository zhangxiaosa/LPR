function opt() {
    try {
        const a = [];
        let b_value = a.__proto__;
        const b_toLocaleString = b_value.toLocaleString();
        const b_unshift = b_value.unshift(b_toLocaleString);
    } catch {
        function e() {}
    }

    return e;
}