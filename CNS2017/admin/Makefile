create:
	vagrant up --provider virtualbox
up:
	vagrant up
provision:
	vagrant provision
clean:
	vagrant destroy
ansible:
	ansible-playbook -vv --private-key=.vagrant/machines/default/virtualbox/private_key -u vagrant -i .vagrant/provisioners/ansible/inventory/vagrant_ansible_inventory playbook.yml
password:
	pip install passlib
	python -c 'import crypt, getpass, base64, os; print crypt.crypt(getpass.getpass(), base64.b64encode(os.urandom(16)))'
