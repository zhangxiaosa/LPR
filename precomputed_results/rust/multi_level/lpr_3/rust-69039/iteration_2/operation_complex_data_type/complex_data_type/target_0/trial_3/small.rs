fn main() {
    // Variable declaration
    let mut d = {
        let prompt_name = "What is your name?"; // Primary data type: &str
        let prompt_feeling = "How are you feeling?"; // Primary data type: &str
        (prompt_name, prompt_feeling)
    };
    let mut _e = String::new(); // Primary data type: String

    // Generate prompts
    match d {
        (prompt_name, _) => {
            // Yielded prompt "What is your name?"
            // Handle prompt
        }
    }

    // Continue with the next prompt
    match d {
        (_, prompt_feeling) => {
            // Yielded prompt "How are you feeling?"
            // Handle prompt
        }
    }
}