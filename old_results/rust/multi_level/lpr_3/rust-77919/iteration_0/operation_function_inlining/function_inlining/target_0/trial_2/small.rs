fn a() {
    [1; <Five as TypeVal<Five>>::c];
}

trait TypeVal<T> {
   const c: T;
}

struct Five;

impl<T> TypeVal<T> for Five {
   const c: T = T;
}