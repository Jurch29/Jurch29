git add .

echo 'Message de commit :'
read commitMessage

git commit -m "$commitMessage"

git push origin master

echo 'Done mon pote'