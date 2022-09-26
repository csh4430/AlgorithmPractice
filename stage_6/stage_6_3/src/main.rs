fn main() {
    let mut arr:Vec<i32> = Vec::new();
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    let s = s.trim().chars();

    
    for a in 0..26
    {
        
        let b = (a + 'a' as u8) as char;
        let mut cnt = -1;
        if s.clone().any(|x| x == b) == true
        {
            for c in s.clone()
            {
                cnt += 1;
                if b == c 
                {
                    break;
                }
            }
        }
        
        arr.push(cnt);
        print!("{} ", &arr[a as usize]);
    }

}
