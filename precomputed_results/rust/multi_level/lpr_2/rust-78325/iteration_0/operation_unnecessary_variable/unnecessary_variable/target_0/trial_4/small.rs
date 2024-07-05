macro_rules! a {
    ( ) => {
        extern crate std as core;
    };
}
a!();
core::panic!();