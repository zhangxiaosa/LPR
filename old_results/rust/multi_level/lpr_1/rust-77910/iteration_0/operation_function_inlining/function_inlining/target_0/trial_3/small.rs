fn main() {
    fn d() {
        let e;
        {
            let c;
            c
        }
        assert_eq!(a, e);
    }
    d();
}