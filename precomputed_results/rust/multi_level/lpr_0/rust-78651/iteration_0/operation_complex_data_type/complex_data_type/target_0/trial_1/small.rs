fn main() {
    let result: Result<(), ()> = Err(());
    let optimized_result: bool = result.is_err();
}