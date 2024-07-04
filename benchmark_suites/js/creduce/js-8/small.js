function opt() {
    try {
        a = []
        let {
            "__proto__": b
        } = a
        c = b.toLocaleString()
        b.unshift(c)
    } catch {
        function d() {}
    }
    return d
}