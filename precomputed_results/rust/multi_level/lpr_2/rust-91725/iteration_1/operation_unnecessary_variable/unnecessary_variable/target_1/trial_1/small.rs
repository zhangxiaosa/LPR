fn main() {              
    assert_eq!(              
        {              
            let mut result;              
            if 0 == 0 {              
                result = 2 * 2              
            } else {              
                result = 2              
            }              
            4 as u64 * result % 5              
        },              
        3              
    );              
}