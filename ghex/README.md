# GitHub Explorer

Searches github for repos and returns their ssh url. Can be combined with `fzf` and `xargs` to interactively clone repos.

## Examples:
- `ghex "linux" # search github for repos with keyword linux`
- `ghex "cbarraco/" # get user repos`
- `ghex "git language:c" # search for repos with keyword git and language is C`
- `ghex "torvalds/" | tail -n 1 | git clone # clone top repo from user`
- `ghex "cbarraco/" | fzf | xarg git clone # interactively clone a user's repo`

Run `pip install -r requirements.txt` to install the required dependencies.