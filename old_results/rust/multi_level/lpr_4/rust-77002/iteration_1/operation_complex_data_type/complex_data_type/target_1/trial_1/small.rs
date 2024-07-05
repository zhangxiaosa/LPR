fn main() {
    let mut l00 = 1i64;
    let mut l01 = 0i64;
    let mut l02 = 0i64;
    let mut l03 = 0i64;
    let mut l10 = 0i64;
    let mut l11 = 1i64;
    let mut l12 = 0i64;
    let mut l13 = 0i64;
    let mut l20 = 0i64;
    let mut l21 = 0i64;
    let mut l22 = 1i64;
    let mut l23 = 0i64;
    let mut l30 = 0i64;
    let mut l31 = 0i64;
    let mut l32 = 0i64;
    let mut l33 = 1i64;

    let b00 = l00;
    let b01 = l01;
    let b02 = l02;
    let b03 = l03;

    let mut result00 = 0i64;
    let mut result01 = 0i64;
    let mut result02 = 0i64;
    let mut result03 = 0i64;
    let mut result10 = 0i64;
    let mut result11 = 0i64;
    let mut result12 = 0i64;
    let mut result13 = 0i64;
    let mut result20 = 0i64;
    let mut result21 = 0i64;
    let mut result22 = 0i64;
    let mut result23 = 0i64;
    let mut result30 = 0i64;
    let mut result31 = 0i64;
    let mut result32 = 0i64;
    let mut result33 = 0i64;

    result00 = b00;
    result01 = b01;
    result02 = b02;
    result03 = b03;

    let mut l = [[result00, result01, result02, result03], [result10, result11, result12, result13],
        [result20, result21, result22, result23], [result30, result31, result32, result33]];

    let mut l = f(&l);

    let l00 = l[0][0];
    let l01 = l[0][1];
    let l02 = l[0][2];
    let l03 = l[0][3];
    let l10 = l[1][0];
    let l11 = l[1][1];
    let l12 = l[1][2];
    let l13 = l[1][3];
    let l20 = l[2][0];
    let l21 = l[2][1];
    let l22 = l[2][2];
    let l23 = l[2][3];
    let l30 = l[3][0];
    let l31 = l[3][1];
    let l32 = l[3][2];
    let l33 = l[3][3];

    println!("{:?}", l);
}

fn f(b: &[[i64; 4]]) -> [[i64; 4]; 4] {
    let mut result00 = 0i64;
    let mut result01 = 0i64;
    let mut result02 = 0i64;
    let mut result03 = 0i64;
    let mut result10 = 0i64;
    let mut result11 = 0i64;
    let mut result12 = 0i64;
    let mut result13 = 0i64;
    let mut result20 = 0i64;
    let mut result21 = 0i64;
    let mut result22 = 0i64;
    let mut result23 = 0i64;
    let mut result30 = 0i64;
    let mut result31 = 0i64;
    let mut result32 = 0i64;
    let mut result33 = 0i64;

    let b00 = b[0][0];
    let b01 = b[0][1];
    let b02 = b[0][2];
    let b03 = b[0][3];

    result00 = b00;
    result01 = b01;
    result02 = b02;
    result03 = b03;

    let result = [[result00, result01, result02, result03], [result10, result11, result12, result13],
        [result20, result21, result22, result23], [result30, result31, result32, result33]];

    result
}