fn a() -> TypeE {
    {}.d(|| ""): TypeF<c>
}

struct TypeF<c> {
    h: TypeE,
}

impl<e> TypeE {
    fn d<e>(self, e) -> TypeF<e> {}
}