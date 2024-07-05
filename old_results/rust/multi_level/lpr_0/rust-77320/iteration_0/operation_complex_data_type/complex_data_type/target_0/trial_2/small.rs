let mut temp_a: isize = 10;
let mut temp_b = std::mem::transmute::<isize, &()>(temp_a);
let b = *temp_b;