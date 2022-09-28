fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n:i32 = n.trim().parse().unwrap();
    if n > 100 || n == 0{
        return;
    }
    let mut cnt = 0;

    for _i in 0..n
    {
        let mut st = String::new();
        std::io::stdin().read_line(&mut st).unwrap();
        let st: Vec<char> = st.trim().chars().collect();

        if st.len() == 0
        {
            return;
        }

        if check(st)
        {
            cnt += 1;
        }
        
    }
    print!("{}", cnt);
}

fn check(st: Vec<char>) -> bool
{
    let mut used : [bool; 26] = [false; 26];

    for i in 0..st.len() as usize
    {
        if i == 0
        {
            used[(st[i] as u8 - 'a' as u8) as usize] = true;
            continue;
        }
        if st[i] == st[i - 1]
        {
            continue;
        }
        if used[(st[i] as u8 - 'a' as u8) as usize]
        {
            return false;
        }
        used[(st[i] as u8 - 'a' as u8) as usize] = true;
    }
    
    return true;
}
