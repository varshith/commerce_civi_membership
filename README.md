# commerce_civi_membership

This is a Drupal 7 module for selling drupal commerce products linked with CiViCRM Memberships.

### Installation

Install like you would any other Drupal 7 module

### Configuration

1. Once you install this module, you will get 
	* a new line item type called 'CiViCRM Membership'
	* a entityreference view that lists membership types added in CiViCRM
	* 2 rules and a rule component
2. Visit 'civicrm/admin/member/membershipType' and add a 'Membership Type' if not already done.
3. Visit 'admin/commerce/config/civicrm' and select a 'Financial Type' if not already done.

#### Using Views
Create a view to list your products(as you wish) and add 'Commerce Product: Add to Cart' item to the list of fields to display.
On clicking this item to update its settings, you will see 'Add to Cart line item type' dropdown. Select 'CiViCRM Membership' and save the view.

#### Using node product display
Create a new content type with a product reference field.
Go to 'manage-display' section of the above content type('admin/structure/types/manage/[content-type]/display').
Under the product reference field format column, verify the format is set to 'Add to Cart form'. Then edit it change 'Add to Cart line item type' and set it to 'CiViCRM Membership'.
Save the form and repeat this for any/all node displays as you see fit.

Now when you add a product using the 'CiViCRM Membership' add to cart form, you will see a options to select a membership type and a membership start date.
Adding it to cart will update the product price to the price of the membership.
On completing checkout, the selected membership will be added to the user.

#### Note
This is a proof-of-concept module and may have issues. Please use it at your own discretion


