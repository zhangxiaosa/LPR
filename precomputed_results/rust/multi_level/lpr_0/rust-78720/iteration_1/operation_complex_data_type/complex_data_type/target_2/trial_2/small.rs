struct EmptyClosure {}

impl FnOnce<()> for EmptyClosure {
    type Output = &'static str;

    extern "rust-call" fn call_once(self, _: ()) -> Self::Output {
        ""
    }
}

struct H {

}

struct F<E> {
    h: H,
}

trait B {
    fn d<E>(self, e: E) -> F<E> where Self: Sized;
}

impl<T> B for T {
    fn d<E>(self, _: E) -> F<E> where Self: Sized {
        F {
            h: H { /* initialize h appropriately */ },
        }
    }
}

fn a() -> impl B {
    let empty_closure = EmptyClosure {};
    "".d(empty_closure)
}