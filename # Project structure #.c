# Project structure # 
my-nginx-site/
├── index.html
└── .git/

# List of commands # 
# 1. Creating dir and geting into the dir 
mkdir my-nginx-site
cd my-nginx-site

# 2. Creating  HTML file (u nano editoru)
nano index.html

# 3. Initilazing gir repo
git init

# 4. Adding file in git 
git add index.html

# 5. Making first git 
git commit -m "Initial commit with index.html"

# 6. starting NGINX container 
docker run -d -p 8080:80 -v $(pwd):/usr/share/nginx/html nginx

# Running docker 
docker run 1e5f3c5b981a