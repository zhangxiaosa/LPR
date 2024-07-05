#![feature(const_hash)]
use std::collections::hash_map::DefaultHasher;
use std::hash::{Hash, Hasher};
use std::ptr;

static mut a: DefaultHasher = DefaultHasher::new();

fn b<F, X, Y, G>(f: F, x: X, y: Y, g: G)
where
    F: Hash,
    X: Hash,
    Y: Hash,
    G: Hash,
{...}