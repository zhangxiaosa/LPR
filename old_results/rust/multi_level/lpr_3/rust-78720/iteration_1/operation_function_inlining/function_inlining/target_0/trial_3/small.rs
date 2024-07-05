fn a() -> f<()> {
    f { h: || "" }
}

struct f<e> {
    h: e,
}